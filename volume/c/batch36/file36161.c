// fichero 36161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36161;

Registro36161 crear_registro36161(int id) {
    Registro36161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
