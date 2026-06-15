// fichero 36265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36265;

Registro36265 crear_registro36265(int id) {
    Registro36265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
