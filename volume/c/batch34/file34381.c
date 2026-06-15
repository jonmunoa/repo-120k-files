// fichero 34381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34381;

Registro34381 crear_registro34381(int id) {
    Registro34381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
