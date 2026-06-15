// fichero 36717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36717;

Registro36717 crear_registro36717(int id) {
    Registro36717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
