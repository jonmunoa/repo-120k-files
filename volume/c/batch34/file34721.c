// fichero 34721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34721;

Registro34721 crear_registro34721(int id) {
    Registro34721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
