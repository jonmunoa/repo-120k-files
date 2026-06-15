// fichero 36669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36669;

Registro36669 crear_registro36669(int id) {
    Registro36669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
