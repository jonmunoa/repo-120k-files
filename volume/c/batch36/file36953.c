// fichero 36953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36953;

Registro36953 crear_registro36953(int id) {
    Registro36953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
