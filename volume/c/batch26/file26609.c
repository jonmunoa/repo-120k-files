// fichero 26609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26609;

Registro26609 crear_registro26609(int id) {
    Registro26609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
