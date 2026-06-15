// fichero 36749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36749;

Registro36749 crear_registro36749(int id) {
    Registro36749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
