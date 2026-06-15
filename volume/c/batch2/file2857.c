// fichero 2857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2857;

Registro2857 crear_registro2857(int id) {
    Registro2857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
