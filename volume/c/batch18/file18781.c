// fichero 18781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18781;

Registro18781 crear_registro18781(int id) {
    Registro18781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
