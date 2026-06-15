// fichero 42041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42041;

Registro42041 crear_registro42041(int id) {
    Registro42041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
