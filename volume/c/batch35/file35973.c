// fichero 35973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35973;

Registro35973 crear_registro35973(int id) {
    Registro35973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
