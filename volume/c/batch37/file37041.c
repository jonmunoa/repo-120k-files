// fichero 37041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37041;

Registro37041 crear_registro37041(int id) {
    Registro37041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
