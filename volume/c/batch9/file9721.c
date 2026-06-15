// fichero 9721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9721;

Registro9721 crear_registro9721(int id) {
    Registro9721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
