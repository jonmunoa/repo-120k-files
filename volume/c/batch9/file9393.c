// fichero 9393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9393;

Registro9393 crear_registro9393(int id) {
    Registro9393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
