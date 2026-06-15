// fichero 36941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36941;

Registro36941 crear_registro36941(int id) {
    Registro36941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
