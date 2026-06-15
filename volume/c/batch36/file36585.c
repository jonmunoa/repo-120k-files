// fichero 36585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36585;

Registro36585 crear_registro36585(int id) {
    Registro36585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
