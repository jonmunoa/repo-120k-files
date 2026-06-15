// fichero 5969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5969;

Registro5969 crear_registro5969(int id) {
    Registro5969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
