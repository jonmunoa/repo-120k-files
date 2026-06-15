// fichero 30881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30881;

Registro30881 crear_registro30881(int id) {
    Registro30881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
