// fichero 15981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15981;

Registro15981 crear_registro15981(int id) {
    Registro15981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
