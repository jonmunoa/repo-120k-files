// fichero 39205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39205;

Registro39205 crear_registro39205(int id) {
    Registro39205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
