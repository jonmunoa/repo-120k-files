// fichero 7949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7949;

Registro7949 crear_registro7949(int id) {
    Registro7949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
