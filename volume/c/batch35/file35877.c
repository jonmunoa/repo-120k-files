// fichero 35877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35877;

Registro35877 crear_registro35877(int id) {
    Registro35877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
