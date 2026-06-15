// fichero 36693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36693;

Registro36693 crear_registro36693(int id) {
    Registro36693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
