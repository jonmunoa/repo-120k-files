// fichero 40949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40949;

Registro40949 crear_registro40949(int id) {
    Registro40949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
