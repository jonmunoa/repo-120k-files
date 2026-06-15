// fichero 28693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28693;

Registro28693 crear_registro28693(int id) {
    Registro28693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
