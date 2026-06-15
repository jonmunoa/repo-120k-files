// fichero 2241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2241;

Registro2241 crear_registro2241(int id) {
    Registro2241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
