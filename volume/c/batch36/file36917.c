// fichero 36917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36917;

Registro36917 crear_registro36917(int id) {
    Registro36917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
