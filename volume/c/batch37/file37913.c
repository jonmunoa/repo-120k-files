// fichero 37913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37913;

Registro37913 crear_registro37913(int id) {
    Registro37913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
