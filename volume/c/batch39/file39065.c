// fichero 39065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39065;

Registro39065 crear_registro39065(int id) {
    Registro39065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
