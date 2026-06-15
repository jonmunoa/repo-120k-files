// fichero 44693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44693;

Registro44693 crear_registro44693(int id) {
    Registro44693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
