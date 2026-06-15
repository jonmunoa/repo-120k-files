// fichero 21609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21609;

Registro21609 crear_registro21609(int id) {
    Registro21609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
