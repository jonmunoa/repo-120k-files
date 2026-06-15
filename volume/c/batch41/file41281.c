// fichero 41281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41281;

Registro41281 crear_registro41281(int id) {
    Registro41281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
