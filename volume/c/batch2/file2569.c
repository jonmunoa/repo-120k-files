// fichero 2569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2569;

Registro2569 crear_registro2569(int id) {
    Registro2569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
