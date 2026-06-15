// fichero 5041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5041;

Registro5041 crear_registro5041(int id) {
    Registro5041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
