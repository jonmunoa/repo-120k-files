// fichero 47041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47041;

Registro47041 crear_registro47041(int id) {
    Registro47041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
