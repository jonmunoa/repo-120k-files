// fichero 40869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40869;

Registro40869 crear_registro40869(int id) {
    Registro40869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
