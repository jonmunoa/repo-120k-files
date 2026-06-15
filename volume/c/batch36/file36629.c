// fichero 36629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36629;

Registro36629 crear_registro36629(int id) {
    Registro36629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
