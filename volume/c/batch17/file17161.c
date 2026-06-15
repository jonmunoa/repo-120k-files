// fichero 17161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17161;

Registro17161 crear_registro17161(int id) {
    Registro17161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
