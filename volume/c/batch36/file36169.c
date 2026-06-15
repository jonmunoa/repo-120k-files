// fichero 36169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36169;

Registro36169 crear_registro36169(int id) {
    Registro36169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
