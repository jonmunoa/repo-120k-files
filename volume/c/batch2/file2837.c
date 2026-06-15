// fichero 2837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2837;

Registro2837 crear_registro2837(int id) {
    Registro2837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
