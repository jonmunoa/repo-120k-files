// fichero 36997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36997;

Registro36997 crear_registro36997(int id) {
    Registro36997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
