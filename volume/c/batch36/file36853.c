// fichero 36853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36853;

Registro36853 crear_registro36853(int id) {
    Registro36853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
