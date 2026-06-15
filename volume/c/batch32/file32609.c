// fichero 32609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32609;

Registro32609 crear_registro32609(int id) {
    Registro32609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
