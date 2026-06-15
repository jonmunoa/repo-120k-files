// fichero 41949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41949;

Registro41949 crear_registro41949(int id) {
    Registro41949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
