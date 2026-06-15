// fichero 8177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8177;

Registro8177 crear_registro8177(int id) {
    Registro8177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
