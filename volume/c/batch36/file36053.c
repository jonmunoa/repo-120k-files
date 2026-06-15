// fichero 36053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36053;

Registro36053 crear_registro36053(int id) {
    Registro36053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
