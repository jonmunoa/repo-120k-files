// fichero 26801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26801;

Registro26801 crear_registro26801(int id) {
    Registro26801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
