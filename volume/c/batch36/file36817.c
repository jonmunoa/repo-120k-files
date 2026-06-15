// fichero 36817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36817;

Registro36817 crear_registro36817(int id) {
    Registro36817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
