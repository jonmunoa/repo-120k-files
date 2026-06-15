// fichero 36849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36849;

Registro36849 crear_registro36849(int id) {
    Registro36849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
