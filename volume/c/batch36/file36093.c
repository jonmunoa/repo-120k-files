// fichero 36093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36093;

Registro36093 crear_registro36093(int id) {
    Registro36093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
