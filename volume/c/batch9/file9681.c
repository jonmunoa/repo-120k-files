// fichero 9681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9681;

Registro9681 crear_registro9681(int id) {
    Registro9681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
