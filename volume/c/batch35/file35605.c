// fichero 35605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35605;

Registro35605 crear_registro35605(int id) {
    Registro35605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
