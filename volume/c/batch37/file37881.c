// fichero 37881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37881;

Registro37881 crear_registro37881(int id) {
    Registro37881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
