// fichero 11653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11653;

Registro11653 crear_registro11653(int id) {
    Registro11653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
