// fichero 17205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17205;

Registro17205 crear_registro17205(int id) {
    Registro17205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
